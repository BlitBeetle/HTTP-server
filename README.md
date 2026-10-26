# HTTP-server
This repository is my attempt to build an HTTP server from scratch. I am doing this to learn about real world applications with programming.

# Current status:
I have made an HTTP server. I hope to make it into an HTTPS server in the future.

# How to test
In the terminal, run the following command while in the "Networking" folder
sudo ./server

Then open a second terminal and run the comand
curl -v http://localhost/

To stop the server, run
pgrep server
sudo kill <pid>
