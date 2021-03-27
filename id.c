static std::vector<std::string> SplitArguments(std::string string) /* Split Arguments */
{
	std::vector<std::string> elements;
	std::stringstream start(string);
	std::istream_iterator<std::string> begin(start);
	std::istream_iterator<std::string> end;
	std::vector<std::string> vectorStrings(begin, end);
	return vectorStrings;
}
