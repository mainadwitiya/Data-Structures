
#memoization

def fibn(n):
	memo={0:1,1:1}

	def helper(n):
		if n not in memo:
			memo[n]=helper(n-1)+helper(n-2)
			print(memo)
		return memo[n]

	return helper(n)




z=10
result=fibn(z)
print(result)