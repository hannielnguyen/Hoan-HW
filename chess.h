namespace chess 
{
    struct posion
    {
        int column;
        int row;
    };
  
    // check if posion locates in table
    bool in_scope(posion);

    // show all available moves
    void show_moves(posion);

    // 8 functions 
    posion move_two_left_one_up(posion);
    posion move_one_left_two_up(posion);
    posion move_one_right_two_up(posion);
    posion move_two_right_one_up(posion);
    posion move_two_right_one_down(posion);
    posion move_one_right_two_down(posion);
    posion move_one_left_two_down(posion);
    posion move_two_left_one_down(posion);
}
