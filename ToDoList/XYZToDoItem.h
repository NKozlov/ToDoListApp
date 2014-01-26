//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Kozlov Nikita on 26.01.14.
//  Copyright (c) 2014 Kozlov Nikita. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
