//
//  TBSequence.h
//  ENTBoostLib
//
//  Created by zhong zf on 14/12/12.
//  Copyright (c) 2014年 entboost. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface TBSequence : NSManagedObject

@property (nonatomic, retain) NSNumber * type;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * value;

@end
