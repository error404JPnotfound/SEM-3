import React from 'react'

function Mapdemo() {
    const arraydemo=['a','b','c','d','puru']
  return (
    <>
        <ul>
            {
                arraydemo.map((s)=>{
                    return(
                        <li>
                            {s}
                        </li>
                    )
                })
            }
        </ul>
    </>
  )
}

export default Mapdemo
