//
//  PhotoDetailTableViewCell.h
//  MMInstapic
//
//  Created by Sherrie Jones on 4/23/15.
//  Copyright (c) 2015 Sherrie Jones. All rights reserved.
//

@import UIKit;

@interface PhotoDetailTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *detailImageView;
@property (weak, nonatomic) IBOutlet UILabel *likesLabel;
@property (weak, nonatomic) IBOutlet UILabel *commentLabel;
@property (weak, nonatomic) IBOutlet UIButton *likeButton;
@property (weak, nonatomic) IBOutlet UIButton *commentButton;

@end

















