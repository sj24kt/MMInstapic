//
//  Comment.h
//  MMInstapic
//
//  Created by Sherrie Jones on 4/21/15.
//  Copyright (c) 2015 Sherrie Jones. All rights reserved.
//

@import Foundation;
#import "Photo.h"
@import Parse;

@interface Comment : PFObject <PFSubclassing>

@property (nonatomic, strong) NSString *comment;
@property (nonatomic, strong) PFUser *user;
@property (nonatomic, strong) Photo *photo;
@property (nonatomic, strong) NSString *objectId;

+ (NSString *)parseClassName;

@end


















