//functions.js
"use strict";
module.exports = {q1, ssReverse }
function computeSalesCommission(salaried,salesAmount){
    let value=0
  if(salaried==true){
      if(salesAmount<300){
          value=0;
          return value;
      }else if((salesAmount>=300)&&(salesAmount<500)){
           value=salesAmount*1/100;
      }else{
          value=salesAmount*2/100;
      }
  } else if((salesAmount>=300)&&(salesAmount<500)){
     value=salesAmount*2/100;
     return value;
  }else if(salesAmount>=500){
      value=3/100*salesAmount;
  }

  
  return value
}