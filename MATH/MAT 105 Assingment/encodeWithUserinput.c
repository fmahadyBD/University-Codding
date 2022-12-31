#include <stdio.h>
#include <string.h>

int main(void) {
  int matrix[3][3];  // Declare a 3x3 matrix

  // Read matrix elements from the user
  printf("Enter matrix elements:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  // Read the message from the user
  char message[100];
  printf("Enter message:\n");
  scanf("%s", message);

  // Encode the message
  int message_length = strlen(message);
  for (int i = 0; i < message_length; i++) {
    char c = message[i];
    int encoded_c = c * matrix[i % 3][0] + matrix[i % 3][1];
    message[i] = encoded_c;
  }

  // Print the encoded message
  printf("Encoded message:\n");
  printf("%s\n", message);

  return 0;
}
