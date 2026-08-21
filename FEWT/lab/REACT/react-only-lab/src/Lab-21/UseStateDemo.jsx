import React from 'react'
import { useState } from 'react'
function UseStateDemo() {
    const [count,setCount]=useState(0);
    const [name,setName]=useState(" ");
  return (
    <div>
        <h1>{count}</h1>
    <button onClick={()=>{
        setCount(count+1)
    }}>Click here to Increase</button>
    <br />
    <button onClick={()=>{
        setCount(count-1)
    }}>Click here to DECREASE</button>
    <br />
    <button onClick={()=>{
        setCount(0)
    }}>Click here to reset</button>
    <br />
    <input onChange={(e)=>{
        setName(e.target.value)
    }} type="text" />
    <br />
    <h1>{name}</h1>
    </div>
  )
}

export default UseStateDemo
