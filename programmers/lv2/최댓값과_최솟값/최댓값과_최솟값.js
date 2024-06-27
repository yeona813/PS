function solution(s) {
  let answer = "";
  let array = s.split(" ").map((item) => parseInt(item.trim(), 10));
  let min = "";
  let max = "";
  min = Math.min(...array);
  max = Math.max(...array);
  answer = min + " " + max;
  return answer;
}
