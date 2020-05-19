//
//  MyUITableViewCell.m
//  ToDoManager
//
//  Created by Song, Tianyi | RASIA on 18/5/20.
//  Copyright © 2020 Song, Tianyi | RASIA. All rights reserved.
//

#import "MyUITableViewCell.h"

@implementation MyUITableViewCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

-(void) setInternalFields:(ToDoEntity *) incomingToDoEntity {
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateStyle:NSDateFormatterShortStyle];
    [dateFormatter setTimeStyle:NSDateFormatterShortStyle];
    
    self.toDoTitleLabel.text = incomingToDoEntity.toDoTitle;
    self.localToDoEntity = incomingToDoEntity;
    
    self.toDoDueDateLabel.text = [dateFormatter stringFromDate:incomingToDoEntity.toDoDueDate];
}

@end
