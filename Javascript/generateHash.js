const statement = "some template string     ";

const generateHash = (s) => {
  s = s.trim();
  s = s.replaceAll(" ", "");
  return "#" + s.toUpperCase();
};

const generateHash2 = (s) => {
  s = s.trim();
  const arr = s.split(" ");
  const hash = arr.reduce((acc, curr) => {
    return acc + curr[0].toUpperCase() + curr.slice(1).toLowerCase();
  }, "");
  console.log(hash);

  return "#" + hash.replaceAll(" ", "");
};
console.log(generateHash2(statement));
