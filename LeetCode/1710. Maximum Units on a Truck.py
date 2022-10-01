# LeetCode 1710. Maximum Units on a Truck
# Sort boxTypes based on the number of units per box in descending order and fill the truck.
class Solution:
    def maximumUnits(self, boxTypes: List[List[int]], truckSize: int) -> int:
        units = 0
        boxTypes.sort(key = lambda x : x[1], reverse = True)
        for box in boxTypes : 
            boxesPut = min(truckSize, box[0])
            units += boxesPut * box[1]
            truckSize -= boxesPut
            if truckSize == 0 : break
        return units