//
//  Comment.m
//  MMInstapic
//
//  Created by Sherrie Jones on 4/21/15.
//  Copyright (c) 2015 Sherrie Jones. All rights reserved.
//

#import "Comment.h"

@implementation Comment
@dynamic  comment;
@dynamic user;
@dynamic photo;
@dynamic objectId;

+ (void)load {
    [self registerSubclass];
}

+ (NSString *)parseClassName {
    return @"Comment";
}

@end


















