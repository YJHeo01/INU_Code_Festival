문제 링크 : https://www.acmicpc.net/problem/32378

<ul> 풀이
  <li>수학적 관찰을 통해, k > 36이면 무조건 Mega가 출력됨을 알 수 있습니다. (2의 37승 : 137,438,953,472)</li>
  <li>dp 점화식을 구현하는 코드를 작성할 때 주의해야 하는 점은, dp[i+1][k] = max(dp[i+1][k], dp[i][k] + (i+1일차 먹이))를 추가해주어야 합니다. 그렇지 않다면, i일차에 k번 강화하고 i+1일차에 먹이를 섭취하는 경우가 반영되지 않기 때문입니다.</li>
</ul>
