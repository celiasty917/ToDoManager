//
//  DPHandlesMOC.h
//  ToDoManager
//
//  Created by Song, Tianyi | RASIA on 18/5/20.
//  Copyright © 2020 Song, Tianyi | RASIA. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol DPHandlesMOC <NSObject>

- (void) receiveMOC: (NSManagedObjectContext *) incomingMOC;

@end

NS_ASSUME_NONNULL_END
