public static string CapitalizeWord(string word)
{
    string result = "";
    for (int i = 0; i < word.Length; i++) {
        if (i == 0)
        result += char.ToUpper(word[i]);
        else
        result += word[i];
    }
    return result;
    // return char.ToUpper(word[0]) + word.Substring(1);
}