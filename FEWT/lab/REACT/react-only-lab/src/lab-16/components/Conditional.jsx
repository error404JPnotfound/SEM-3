import React from 'react'

// function Conditional(login) {
//     let message;
//     login=false;
//     if(login){
//         message=<h1>kakaka</h1>
//     }
//     else {
//         message=<h1>khotu khotu</h1>
//     }
//     return(message)
// }

function Conditional(login){
    let message
    login=true
    login ? (message=<h1>True</h1>) : (message=<h1>False</h1>);
    return(message)
}

export default Conditional
