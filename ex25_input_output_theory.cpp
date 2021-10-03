/*https://youtu.be/_bYFu9mBnr4?t=22430
basics of i/o

keyboard > buffer > program
the enter key clears the buffer

input could also come from some text file or configuration file



---so, iostream, ifstream, fstream---

A
cin(gets input from console) object is from the "input stream" istream class 

B
reading from files
There is another class "input filestream", ifstream class
we can make our own custom input object to get stuff from file
    which we can name whatever
    associate it to a particular file
    use it like cin

    input_file >> var
    //storing input data in variable

C
writing to files
similarly, we can make an object from fstream class and send it to output
    output_file << some_data
    //and we can pass some data to output
*/
