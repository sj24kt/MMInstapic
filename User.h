//
//  User.h
//  MMInstapic
//
//  Created by Sherrie Jones on 4/20/15.
//  Copyright (c) 2015 Sherrie Jones. All rights reserved.
//

@import Foundation;
@import Parse;

@interface User : PFObject<PFSubclassing>

@property (nonatomic, strong) NSString *username;
@property (nonatomic, strong) NSString *email;
@property (nonatomic, strong) PFFile *profileImage;
@property (nonatomic, strong) PFUser *user;
@property (nonatomic, strong) NSArray *posts;

+ (NSString *)parseClassName;

@end













