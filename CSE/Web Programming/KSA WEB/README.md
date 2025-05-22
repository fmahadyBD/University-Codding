## Overview of output
![alt text](image.png)

![alt text](image-1.png)

## **HTML Structure**
- Complete form with all requested fields: Full Name, Email, Password, Confirm Password, Gender (radio buttons), Date of Birth, Phone Number, Country (dropdown), and Terms checkbox
- Semantic HTML structure with proper labels and accessibility features

## **CSS Styling**
- **Modern Design**: Clean, professional look with gradient backgrounds and card-style form container
- **Grid Layout**: Responsive 2-column grid that adapts to mobile devices
- **Interactive Elements**: 
  - Hover effects on buttons with elevation animation
  - Focus states for all inputs with colored borders and subtle shadows
  - Error states with red highlighting
- **Mobile Responsive**: Automatically adjusts to single column on smaller screens

## **JavaScript Validation**
Complete client-side validation including:
- **Full Name**: Checks for non-empty input
- **Email**: Validates proper email format using regex
- **Password**: Ensures minimum 6 characters
- **Confirm Password**: Matches with original password
- **Phone Number**: Validates 10-digit format and strips non-numeric characters
- **Gender**: Ensures one option is selected
- **Terms**: Must be checked to proceed

## **Additional Features**
- **Real-time Validation**: Email and password confirmation validate on blur
- **Phone Input Filtering**: Automatically removes non-digit characters
- **Success Message**: Shows confirmation when form is successfully submitted
- **Error Display**: Clear error messages with visual indicators
- **Console Logging**: Form data is logged when successfully validated




