const obj = {
  name: "John",
  age: 30,
  parents: {
    father: "Mike",
    mother: "Sara",
  },
  hobbies: ["reading", "gaming", "coding"],
};

const obj2 = {
  name: "Amit",
  age: 30,
  parents: {
    father: "Mike",
    mother: "Sara",
  },
  hobbies: ["reading", "gaming", "coding"],
};

const obj3 = obj2; // Reference Copy
console.log(obj3 === obj2); // true as both are same object same memory location

// Shallow copy methods
const ShallowObj1 = { ...obj2 }; // Shallow copy
const ShallowObj2 = Object.assign({}, obj2); // Shallow copy
console.log(obj3 === obj2); // true as both are same object same memory location
console.log(ShallowObj2 === obj2); // false as both are different objects

// Deep copy methods
const DeepObj1 = JSON.parse(JSON.stringify(obj2)); // Deep copy
const DeepObj2 = structuredClone(obj2); // Deep copy

function recursiveDeepCopy(obj) {
  if (obj === null || typeof obj !== "object") {
    return obj; // Return the value if obj is not an object or is null
  }
  if (Array.isArray(obj)) {
    return obj.map(recursiveDeepCopy); // Recursively copy array elements
  }

  const newObj = Array.isArray(obj) ? [] : {}; // Create a new object or array
  for (const key in obj) {
    if (obj.hasOwnProperty(key)) {
      newObj[key] = recursiveDeepCopy(obj[key]); // Recursively copy properties
    }
  }
  return newObj; // Return the deep copied object
}
const DeepObj3 = recursiveDeepCopy(obj2); // Deep copy using custom function
console.log(DeepObj3);
