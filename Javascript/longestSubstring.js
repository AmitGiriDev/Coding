const statement = "some template string     ";

const longestSubstring = (s) => {
  s = s.trim();
  let value = [];
  let key = 0;
  value[key] = "";
  for (let i = 0; i < s.length; i++) {
    if (s[i] === " ") {
      key += 1;
      value[key] = "";
    } else {
      value[key] += s[i];
    }
  }

  let longstr = value[0];
  let len = longstr.length;
  for (let i = 0; i < value.length; i++) {
    if (value[i].length > len) {
      len = value[i].length;
      longstr = value[i];
    }
  }
  console.log(longstr);

  return longstr;
};

longestSubstring(statement);
