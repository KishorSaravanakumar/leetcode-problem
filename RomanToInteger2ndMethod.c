int romanToInt(char * s)
{
    int t['X' + 1] = {
        ['I'] = 1,
        ['V'] = 5,
        ['X'] = 10,
        ['L'] = 50,
        ['C'] = 100,
        ['D'] = 500,
        ['M'] = 1000,
    };
    int res = 0;
    for (int i = 0; s[i]; i++) {
        if (t[s[i]] < t[s[i+1]])
            res -= t[s[i]];
        else
            res += t[s[i]];
    }
    return res;
}
/*An array t is initialized with a size of 'X' + 1, which ensures the array has enough space to hold the values for the relevant Roman numeral characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
The array t is used to map Roman numeral characters to their corresponding integer values. For example, t['I'] will be 1, t['V'] will be 5, and so on.
This technique is called "designated initializers," which allows specific elements of the array to be initialized directly by their character index.*/