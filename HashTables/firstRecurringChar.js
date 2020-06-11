// //Naive approach
//O(n^2)
// function first_REC_Char(input){

//     for (let i = 0; i < input.length; i++) {
//         for (let j = i + 1; j < input.length; j++) {
//             if(input[i] === input[j]){
//                 return input[i]
//             }       
//         }        
//     }
//     return undefined;
// }

// first_REC_Char([2,5,1,2,3,5,1,2,4])

/////************************/////

//using hash tables = O(n)
function first_REC_Char(input){
    let map = {};

    for (let i = 0; i < input.length; i++) {
        if(map[input[i]] !== undefined){
            return input[i];
        }else{
            map[input[i]] = i ;
        }
    }
    return undefined;
}

first_REC_Char([2,5,1,2,3,5,1,2,4])
