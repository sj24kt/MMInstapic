//
//  Photo.h
//  MMInstapic
//
//  Created by Sherrie Jones on 4/20/15.
//  Copyright (c) 2015 Sherrie Jones. All rights reserved.
//

@import Foundation;
@import Parse;

@interface Photo : PFObject <PFSubclassing>

@property (nonatomic, strong) NSString *caption;
@property (nonatomic, strong) PFFile *imageFile;
@property (nonatomic, strong) PFUser *user;
@property (nonatomic, strong) NSArray *likes;
@property (nonatomic, strong) NSArray *comments;
@property (nonatomic, strong) NSData *imageData;
@property (nonatomic, strong) NSNumber *likeCount;

+ (NSString *)parseClassName;

@end













