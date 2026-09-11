import React from 'react'
import { useState } from "react";
import Login from "./Lab-19/Login";
import Dashboard from "./Lab-19/Dashboard";
import Crud from './Lab-23/CRUD';
import "./App.css"

function App() {
    return(
<>
    <Crud/>
</>
    )
//     const [currentUser, setCurrentUser] = useState("");

//   const users = [
//     { username: "Jeel", password: "12345", name: "Jeel Pandya" },
//     { username: "Pandya", password: "67890", name: "Pandya User" }
//   ];

//   const handleLogin = (username, password) => {
//     const user = users.find(
//       (u) => u.username === username && u.password === password
//     );
//     if (user) {
//       setCurrentUser(user);
//     } else {
//       alert("Invalid credentials!");
//     }
//   };

//   const handleLogout = () => setCurrentUser("");

//   return (
//     <div>
//       {currentUser ? (
//         <Dashboard user={currentUser} onLogout={handleLogout} />
//       ) : (
//         <Login onLogin={handleLogin} />
//       )}
//     </div>
//   );

}

export default App
