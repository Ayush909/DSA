function reverse(str){

    if(!str || str.length <2 || typeof(str) !== 'string'){
        return 'thats not a string!'
    }

    let backwards = [];
    for(let i = str.length-1 ; i >= 0 ; i--){
      backwards.push(str[i])
    }
    return backwards.join('');
  }
  
reverse('Ayush')


//Alternate1
// const string = 'ayush';
// console.log(string.split('').reverse().join(''))

//Alternate2
// const reverse = str => str.split('').reverse('').join('')
// reverse('Ayush')

// Alternate3
// const reverse = str => [...str].reverse().join('')
// reverse('Ayush')