async function Promise1() {
  return new Promise((res, rej) => {
    setTimeout(() => {
      res("Promise1");
    }, 5000);
  });
}
async function Promise2() {
  return new Promise((res, rej) => {
    setTimeout(() => {
      res("Promise2");
    }, 2000);
  });
}

const p1 = new Promise((res, rej) => {
  setTimeout(() => {
    res("Promise1");
  }, 5000);
});

const p2 = new Promise((res, rej) => {
  setTimeout(() => {
    res("Promise2");
  }, 2000);
});

async function fun() {
  const result1 = await p1;
  console.log(result1);
  const result2 = await p2;
  console.log(result2);
  // return [result1, result2];
}
fun();

async function fetchCall(url) {
  const response = await fetch(url);
  // const response = await fetch(url);
  if (!response.ok) {
    throw new Error("Network response was not ok");
  }
  console.log("response", response);

  const data = await response.json();
  return data;
}

fetchCall("https://jsonplaceholder.typicode.com/posts")
  .then((data) => {
    console.log("data", data);
  })
  .catch((error) => {
    console.error("Error:", error);
  });
