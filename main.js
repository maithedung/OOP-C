console.time();
const log = console.log;

function permutationCount(n) {
  let count = 0;
  bHV(1, [], n, bInit(n, []), count);
  return count;
}

function bHV(i, s, n, b, count) {
  for (let j = 1; j <= n; j++) {
    if (b[j] === 1) {
      s[i] = j;
      b[j] = 0;
      if (i === n) count = count + 1;
      else bHV(i + 1, s, n, b);
      b[j] = 1;
    }
  }
}

function bInit(n, b) {
  for (let i = 1; i <= n; i++) b[i] = 1;
  return b;
}

log(permutationCount(3));

console.timeEnd();

function strongPassword(s) {
  const numbers = "0123456789";
  const lower_case = "abcdefghijklmnopqrstuvwxyz";
  const upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  const special_characters = "!@#$%^&*()-+";

  let count = 0;
  let count1 = 0;
  let count2 = 0;
  let count3 = 0;
  let count4 = 0;

  for (let i of s) {
    if (numbers.indexOf(i) > -1) ++count1;
    if (lower_case.indexOf(i) > -1) ++count2;
    if (upper_case.indexOf(i) > -1) ++count3;
    if (special_characters.indexOf(i) > -1) ++count4;
  }

  if (count1) ++count;
  if (count2) ++count;
  if (count3) ++count;
  if (count4) ++count;

  if (s.length < 6) return 6 - count;

  count = 0;

  if (!count1) ++count;
  if (!count2) ++count;
  if (!count3) ++count;
  if (!count4) ++count;

  return count;
}

strongPassword("Ab1");
