#include "RequestBuilder.hpp"

#include "utils/PlatformUtils.hpp"
#include "utils/PromptUtils.hpp"

#include <istream>
#include <sstream>

void RequestBuilder::ReadPrompt(const int argc, const char* argv[], std::istream& stream)
{
    const auto prompt = utils::ResolveInput(argc, argv, stream, utils::IsTerminalInteractive());
    m_Prompt = utils::ParsePrompt(prompt);
}

void RequestBuilder::BuildRequest()
{
    std::ostringstream oss;
    oss << "You are an AI assistant. The user asked: " << m_Prompt << '\n';
    oss << "Available tools you may call exactly once:" << '\n';
    oss << "- run_command" << '\n';
    oss << "- read_file" << '\n';
    oss << "- list_directory" << '\n';
    oss << "Provide a JSON response indicating:" << '\n';
    oss << "1) Which tool to call (tool)" << '\n';
    oss << "2) The arguments (args)" << '\n';
    oss << "3) A brief explanation (explanation)" << '\n';
    m_Request = oss.str();
}
