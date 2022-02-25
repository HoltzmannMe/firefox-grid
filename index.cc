.container {
  border: 5px solid #ffcc5c;
  display: flex;
}

.container > li {
  flex: 1;
}


/* let's make the logout item grow twice as much as the others*/
.container > li:nth-child(4) {
  flex: 2; 
}
