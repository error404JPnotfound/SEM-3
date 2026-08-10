import React, { useState } from "react";

function Login() {
  const [email, setEmail] = useState("");
  const [password, setPassword] = useState("");
  const [error, setError] = useState("");
  const handleSubmit = (e) => {
    e.preventDefault(); // Prevents page reload
    setError("");

    if (!email || !password) {
      setError("All fields are required!");
      return;
    }

    console.log("Submit logic goes here:", { email, password });
  };

  return (
    <input
      type="email"
      className="form-control"
      placeholder="Enter email"
      value={email}
      onChange={(e) => setEmail(e.target.value)} // Updates state as you type
    />
  );
}

export default Login;
