console.time()
const log = console.log

function permutationCount(n) {
  let count = 0
  bHV(1, [], n, bInit(n, []), count)
  return count
}

function bHV(i, s, n, b, count) {
  for (let j = 1; j <= n; j++) {
    if (b[j] === 1) {
      s[i] = j
      b[j] = 0
      if (i === n) count = count + 1
      else bHV(i + 1, s, n, b)
      b[j] = 1
    }
  }
}

function bInit(n, b) {
  for (let i = 1; i <= n; i++) b[i] = 1
  return b
}

log(permutationCount(3))

console.timeEnd()




