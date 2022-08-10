class Solution {
	public:
		TreeNode* sortedArrayToBST(vector<int>& ar) {
			function<TreeNode*(int, int)> sol = [&] (int l, int r) -> TreeNode* {
				if (l == r) return nullptr;
				int m = (l + r) / 2;
				return new TreeNode(ar[m], sol(l, m), sol(m + 1, r));
			};
			return sol(0, ar.size());

		}
};