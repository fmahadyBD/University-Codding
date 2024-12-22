.model small
.stack 100h

.data
    welcomeMsg db "Welcome to the Dice Roll Game!$"
    menuMsg db 0Dh, 0Ah, "1. Roll a dice", 0Dh, 0Ah, "2. Roll multiple dice", 0Dh, 0Ah, "3. Exit", 0Dh, 0Ah, "Choose an option: $"
    diceMsg db "Rolling the dice...$"
    resultMsg db "You rolled a: $"
    multipleRollMsg db "Enter the number of dice to roll: $"
    invalidOptionMsg db "Invalid option. Try again.$"
    replayMsg db "Do you want to play again? (y/n): $"
    newLine db 0Dh, 0Ah, "$"
    diceResult db 0
    userInput db 0

.code
main proc
    mov ax, @data          ; Load data segment
    mov ds, ax

    call displayWelcome

gameLoop:
    call displayMenu
    call getUserInput

    cmp userInput, '1'
    je singleDiceRoll
    cmp userInput, '2'
    je multipleDiceRoll
    cmp userInput, '3'
    je exitGame
    call invalidOption
    jmp gameLoop

singleDiceRoll:
    call rollSingleDice
    call replayPrompt
    jmp gameLoop

multipleDiceRoll:
    call rollMultipleDice
    call replayPrompt
    jmp gameLoop

exitGame:
    mov ah, 4Ch           ; DOS interrupt to exit program
    mov al, 0             ; Return code 0
    int 21h

; Function to display a welcome message
displayWelcome proc
    lea dx, welcomeMsg
    call printString
    ret
displayWelcome endp

; Function to display the menu
displayMenu proc
    lea dx, menuMsg
    call printString
    ret
displayMenu endp

; Function to roll a single dice
rollSingleDice proc
    lea dx, diceMsg
    call printString

    call generateRandom
    add al, 1
    mov diceResult, al

    lea dx, resultMsg
    call printString

    mov al, diceResult
    call printNumber

    lea dx, newLine
    call printString
    ret
rollSingleDice endp

; Function to roll multiple dice
rollMultipleDice proc
    lea dx, multipleRollMsg
    call printString

    call getUserInput
    sub userInput, '0'
    mov cl, userInput

rollLoop:
    call generateRandom
    add al, 1
    mov diceResult, al

    lea dx, resultMsg
    call printString

    mov al, diceResult
    call printNumber

    lea dx, newLine
    call printString

    loop rollLoop
    ret
rollMultipleDice endp

; Function to handle invalid menu options
invalidOption proc
    lea dx, invalidOptionMsg
    call printString
    ret
invalidOption endp

; Function to prompt for replay
replayPrompt proc
    lea dx, replayMsg
    call printString

    call getUserInput
    cmp userInput, 'y'
    je gameLoop
    cmp userInput, 'n'
    je exitGame
    call invalidOption
    call replayPrompt
    ret
replayPrompt endp

; Function to get user input (single character)
getUserInput proc
    mov ah, 01h           ; Read character from standard input
    int 21h
    mov userInput, al
    ret
getUserInput endp

; Function to print a string
printString proc
    mov ah, 09h           ; Print string function
    int 21h
    ret
printString endp

; Function to generate a random number (0 to 5)
generateRandom proc
    mov ah, 2Ch           ; Get system time
    int 21h
    mov al, dh            ; Use hour as a seed
    xor ah, ah
    div byte ptr 6        ; Limit result to 0-5
    ret
generateRandom endp

; Function to print a number (0-9)
printNumber proc
    add al, '0'
    mov dl, al
    mov ah, 02h           ; Print character function
    int 21h
    ret
printNumber endp

end main
