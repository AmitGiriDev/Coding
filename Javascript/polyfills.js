const arr = [1, 2, 3, 4, 5];

const myMap = (array, callback) => {
  const result = [];
  for (let i = 0; i < array.length; i++) {
    result[i] = callback(array[i], i);
  }
  return result;
};

const arr2 = myMap(arr, (value, index) => {
  return value * 3;
});

console.log("myMap", arr2);

const myFilter = (array, callback) => {
  const result = [];
  for (let i = 0; i < array.length; i++) {
    if (callback(array[i], i)) {
      result.push(array[i]);
    }
  }
  return result;
};

const filteredArr = myFilter(arr, (item, index) => {
  return item === 2;
});

console.log("myFilter", filteredArr);

Array.prototype.MyReduce = function (callback, initialValue) {
  let val = initialValue;
  for (let i = 0; i < this.length; i++) {
    val = callback(val, this[i], i, this);
  }
  return val;
};
