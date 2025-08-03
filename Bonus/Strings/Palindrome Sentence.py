import re
class Solution:
	def isPalinSent(self, s):
		# code here
		words = re.split(r'[^a-zA-Z0-9]+',s)
		combined = ''.join(words).lower()
		return combined == combined[::-1]