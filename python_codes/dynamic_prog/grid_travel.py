def grid_travelling(m,n):
	#memo={"1:1":1}
	memo = {"1,1": 1}

	def helper(m,n):
		if m == 0 or n == 0:
			return 0
		key = f"{m},{n}"
		if key in memo:
			return memo[key]
			key = f"{n},{m}"
		if key in memo:
			return memo[key]
		memo[key]=helper(m-1,n)+helper(m,n-1)
		return memo[key]

	return helper(m, n)


x=3
y=2
result=grid_travelling(x,y)
print(result)