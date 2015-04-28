//
//  User.m
//  MMInstapic
//
//  Created by Sherrie Jones on 4/20/15.
//  Copyright (c) 2015 Sherrie Jones. All rights reserved.
//

#import "User.h"

@implementation User

@dynamic username;
@dynamic user;
@dynamic posts;
@dynamic email;
@dynamic profileImage;

+ (void)load {
    [self registerSubclass];
}

+ (NSString *)parseClassName {
    return @"Person";
}

@end

















