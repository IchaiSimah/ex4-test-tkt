#ifndef EXCEPTION_H_
#define EXCEPTION_H_

#include <exception>
#include <string>

class Exception : public std::exception{
public:
    Exception(){
        m_what = "something went wrong";
    }
    const char* what()const noexcept override{
        return m_what.c_str();
    }
protected:
    std::string m_what;
};

class DeckFileNotFound : public Exception{
public:
    DeckFileNotFound(){
        m_what = "Deck File Error: File not found";
    }
    const char* what()const noexcept override{
        return m_what.c_str();
    }
};

class DeckFileFormatError : public Exception{
    public: 
    DeckFileFormatError(int line){
        m_what = "Deck File Error: File format error in line " + std::to_string(line);
    }
    const char* what()const noexcept override{
        return m_what.c_str();
    }
};

class DeckFileInvalidSize : public Exception{
    public:
    DeckFileInvalidSize(){
        m_what = "Deck File Error: Deck size is invalid";
    }
    const char* what()const noexcept override{
        return m_what.c_str();
    }
};

#endif //EXCEPTION_H_