//
//  MyUITableViewCell.h
//  ToDoManager
//
//  Created by Song, Tianyi | RASIA on 18/5/20.
//  Copyright © 2020 Song, Tianyi | RASIA. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ToDoEntity+CoreDataClass.h"

NS_ASSUME_NONNULL_BEGIN

@interface MyUITableViewCell : UITableViewCell

@property (strong, nonatomic) ToDoEntity *localToDoEntity;
@property (weak, nonatomic) IBOutlet UILabel *toDoTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *toDoDueDateLabel;

-(void) setInternalFields:(ToDoEntity *) incomingToDoEntity;

@end

NS_ASSUME_NONNULL_END
