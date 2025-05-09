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

String.prototype.mySplit = function (condition) {
  if (this.length < 1 || typeof condition !== "string") {
    throw new Error("bad condition");
  }
  let str = this.toString().trim();
  const value = [""];
  let key = 0;
  for (let i = 0; i < str.length; i++) {
    if (str[i] === condition) {
      key += 1;
      value[key] = "";
    } else {
      value[key] += str[i];
    }
  }

  return value;
};
const statement = "some template string     ";

//object.lenth

const obj = {
  name: "John",
  age: 30,
  city: "New York",
};

Object.prototype.myLength = function () {
  return Object.keys(this).length;
};

const length = obj.myLength();
console.log("myLength", length);

const pr = new Promise((resolve, reject) => {
  setTimeout(() => {
    resolve("done");
  }, 2000);
});
