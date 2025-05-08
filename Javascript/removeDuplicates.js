const array = [1, -9, -9, 2, 1, 1, 2, 3, 4, 5];

const removeDuplicatesUsingSet = (arr) => {
  const uniqueElements = new Set(arr);
  return [...uniqueElements];
};

const removeDuplicatesUsingFilter = (arr) => {
  //checking if item is occuring before it's current index or not
  return arr.filter((item, index) => arr.indexOf(item) === index);
};

const removeDuplicatesUsingMap = (arr) => {
  const tempMap = {};
  for (let i = 0; i < arr.length; i++) {
    if (!tempMap[arr[i]]) tempMap[arr[i]] = arr[i];
  }
  return Object.keys(tempMap).map(Number);
};

console.log(removeDuplicatesUsingSet(array)); // [1, 2, 3, 4, 5]
