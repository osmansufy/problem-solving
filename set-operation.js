const intersection = function (nums1, nums2) {
  const set1 = new Set(nums1);
  const set2 = new Set(nums2);
  const result = [];

  for (const item of set1) {
    if (set2.has(item)) {
      result.push(item);
    }
  }
  return result;
};

console.log(intersection([1, 2, 2, 1], [2, 2]));
