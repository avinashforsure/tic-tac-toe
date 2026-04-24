/* const avi={
    name: "avinash murmu",
    age :12,
    personalDetails:{
        salary:0,
        income :1200,
        merit:{
            dog:"pup"
        }
    }
}
console.log(avi.personalDetails.merit); */




//merging 2 objects :
const obj1={
    1:"avi",2:"murmu"
}
const obj2={
    3:"nomad",1:"murmu"
}
/* const obj3=Object.assign({},obj1,obj2)
console.log(obj3) */

//OR

const obj3={...obj1,...obj2}
console.log(Object.values(obj1));

