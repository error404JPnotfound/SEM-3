import React from 'react'
import { useState } from 'react'
import { useEffect } from 'react'
function UseEffectDemo() {
    const[sec,setSec]=useState(0);
    useEffect(()=>{
        setTimeout(()=>{
            setSec(sec+1);
        },1000)
    },[sec])
  return (
    <div>
      <h1>{sec}</h1>

    </div>
  )
}

export default UseEffectDemo
