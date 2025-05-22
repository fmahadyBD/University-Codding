document
  .getElementById("registrationForm")
  .addEventListener("submit", function (e) {
    e.preventDefault();

    clearErrors();

    const fullName = document.getElementById("fullName").value.trim();
    const email = document.getElementById("email").value.trim();
    const password = document.getElementById("password").value;
    const confirmPassword = document.getElementById("confirmPassword").value;
    const phone = document.getElementById("phone").value.trim();
    const gender = document.querySelector('input[name="gender"]:checked');
    const terms = document.getElementById("terms").checked;

    let isValid = true;

    if (!fullName) {
      showError("fullNameError", "fullName", "Please enter your full name");
      isValid = false;
    }

    const emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
    if (!email) {
      showError("emailError", "email", "Please enter your email address");
      isValid = false;
    } else if (!emailRegex.test(email)) {
      showError("emailError", "email", "Please enter a valid email address");
      isValid = false;
    }

    if (!password) {
      showError("passwordError", "password", "Please enter a password");
      isValid = false;
    } else if (password.length < 6) {
      showError(
        "passwordError",
        "password",
        "Password must be at least 6 characters long"
      );
      isValid = false;
    }

    if (!confirmPassword) {
      showError(
        "confirmPasswordError",
        "confirmPassword",
        "Please confirm your password"
      );
      isValid = false;
    } else if (password !== confirmPassword) {
      showError(
        "confirmPasswordError",
        "confirmPassword",
        "Passwords do not match"
      );
      isValid = false;
    }

    const phoneRegex = /^\d{11}$/;
    if (!phone) {
      showError("phoneError", "phone", "Please enter your phone number");
      isValid = false;
    } else if (!phoneRegex.test(phone)) {
      showError(
        "phoneError",
        "phone",
        "Please enter a valid 11-digit phone number"
      );
      isValid = false;
    }

    if (!gender) {
      showError("genderError", null, "Please select your gender");
      isValid = false;
    }

    if (!terms) {
      showError(
        "termsError",
        "terms",
        "You must agree to the Terms and Conditions"
      );
      isValid = false;
    }

    if (isValid) {
      document.getElementById("successMessage").style.display = "block";
      document.getElementById("registrationForm").style.display = "none";

      console.log("Form submitted successfully!", {
        fullName,
        email,
        password,
        phone,
        gender: gender.value,
        dateOfBirth: document.getElementById("dateOfBirth").value,
        country: document.getElementById("country").value,
      });
    }
  });

function showError(errorId, inputId, message) {
  const errorElement = document.getElementById(errorId);
  errorElement.textContent = message;
  errorElement.style.display = "block";

  if (inputId) {
    document.getElementById(inputId).classList.add("error");
  }
}

function clearErrors() {
  const errorMessages = document.querySelectorAll(".error-message");
  const errorInputs = document.querySelectorAll(".form-input.error");

  errorMessages.forEach((error) => {
    error.style.display = "none";
  });

  errorInputs.forEach((input) => {
    input.classList.remove("error");
  });
}

document.getElementById("email").addEventListener("blur", function () {
  const email = this.value.trim();
  const emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;

  if (email && !emailRegex.test(email)) {
    showError("emailError", "email", "Please enter a valid email address");
  } else if (email) {
    document.getElementById("emailError").style.display = "none";
    this.classList.remove("error");
  }
});

document
  .getElementById("confirmPassword")
  .addEventListener("blur", function () {
    const password = document.getElementById("password").value;
    const confirmPassword = this.value;

    if (confirmPassword && password !== confirmPassword) {
      showError(
        "confirmPasswordError",
        "confirmPassword",
        "Passwords do not match"
      );
    } else if (confirmPassword) {
      document.getElementById("confirmPasswordError").style.display = "none";
      this.classList.remove("error");
    }
  });

document.getElementById("phone").addEventListener("input", function () {
  this.value = this.value.replace(/\D/g, "");
});
