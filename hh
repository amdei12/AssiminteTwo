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
console.log(computeSalesCommission(true,200));
console.log(computeSalesCommission(false,200));
console.log(computeSalesCommission(true,300));
console.log(computeSalesCommission(false,300));
console.log(computeSalesCommission(true,3500));
console.log(computeSalesCommission(false,3500));

function balanceOfASavingsAccount(nitialamot,interestrate,years){
  for(let i=1;i<=years;i++){
    nitialamot=nitialamot+nitialamot*interestrate/100*i;
  }
  return nitialamot
}
console.log(balanceOfASavingsAccount(100,10,1));
console.log(balanceOfASavingsAccount(10000, 5, 10));

  
function sumDigitsandmult(num){
    let sum=0;
    let mut=1;
    while(true){
        let x=num%10;
        sum=x+sum;
        mut=mut*x;
        num=Math.floor(num/10);
        if(num<10){
            break;
        }
    }
    sum=num+sum;
    mut=mut*num;
    return sum +" & "+mut
}
console.log(sumDigitsandmult(1234));
function convertFirnigt(num){
    let fir=(num-32)*5/9;
    return fir;
  
}
console.log(convertFirnigt(212));
function twopointsasinputs(x1,x2,y3,y4){
  let s= Math.sqrt((Math.pow((x1-y3),2)+Math.pow((x2-y4),2)));
  return s;
}
console.log(twopointsasinputs(0,0,5,5));