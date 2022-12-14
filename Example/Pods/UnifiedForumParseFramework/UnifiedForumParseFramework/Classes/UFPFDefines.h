//
//  UFPFDefines.h
//  UFPFParse
//
//  Created by XueFeng Chen on 2021/6/22.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, UFPFErrorCode) {
    kUFPFErrorUserIsLocked = 1000,
    kUFPFErrorUserIsDeleted = 1001,
};

//typedef NS_ENUM(NSInteger, UFPFTimeLineType) {
//    UFPFTimeLineTypeLikeTopic = 0,
//    UFPFTimeLineTypeLikePost = 1,
//    UFPFTimeLineTypeLikeReply = 2,
//    UFPFTimeLineTypePost = 3,
//    UFPFTimeLineTypeReply = 4,
//    UFPFTimeLineTypeFollow = 5,
//};

//typedef NS_ENUM(NSInteger, UFPFParseRecordStatus) {
//    UFPFParseRecordStatusPrivate = 0,
//    UFPFParseRecordStatusPublic = 1,
//    UFPFParseRecordStatusBanned = 2
//};

//typedef NS_ENUM(NSInteger, UFPFParseActivityType) {
//    UFPFParseActivityTypeAddPost = 100,
//    UFPFParseActivityTypeAddLike = 200,
//    UFPFParseActivityTypeAddShare = 300,
//    UFPFParseActivityTypeAddFollow = 400,
//    UFPFParseActivityTypeAddReply = 500,
//
//    UFPFParseActivityTypeAddTopic = 1000,
//    UFPFParseActivityTypePublicTopic = 1001,
//    UFPFParseActivityTypeBanTopic = 1002,
//};

//typedef NS_ENUM(NSInteger, UFPFParseReportType) {
//    UFPFParseReportTypeTopic = 0,
//    UFPFParseReportTypePost = 1
//};

//typedef NS_ENUM(NSInteger, UFPFParseLikeType) {
//    UFPFParseLikeTypeTopic = 0,
//    UFPFParseLikeTypePost = 1
//};

typedef NS_ENUM(NSInteger, UFPFParseReportReason) {
    UFPFParseReportReasonPornography = 0,
    UFPFParseReportReasonIllegal = 1,
    UFPFParseReportReasonIrrelated = 2,
    UFPFParseReportReasonLost = 3,
    UFPFParseReportReasonOthers = 4,
};

extern NSString *const UFPFTimeLineTypeAddTopic;
extern NSString *const UFPFTimeLineTypeAddPost;
extern NSString *const UFPFTimeLineTypeAddReply;
extern NSString *const UFPFTimeLineTypeLikeTopic;
extern NSString *const UFPFTimeLineTypeLikePost;
extern NSString *const UFPFTimeLineTypeLikeReply;
extern NSString *const UFPFTimeLineTypeFollow;
extern NSString *const UFPFTimeLineTypeUnfollow;

extern NSString *const UFPFNotificationTypeComment;
extern NSString *const UFPFNotificationTypeLike;
extern NSString *const UFPFNotificationTypeMessage;
extern NSString *const UFPFNotificationTypeFollow;
extern NSString *const UFPFNotificationTypeOther;

extern NSString *const UFPFNotificationSubTypeNone;
extern NSString *const UFPFNotificationSubTypeCommentTopic;
extern NSString *const UFPFNotificationSubTypeCommentPost;
extern NSString *const UFPFNotificationSubTypeCommentReply;
extern NSString *const UFPFNotificationSubTypeLikeTopic;
extern NSString *const UFPFNotificationSubTypeLikePost;
extern NSString *const UFPFNotificationSubTypeLikeReply;
extern NSString *const UFPFNotificationSubTypeOtherTopicIsNotApproved;
extern NSString *const UFPFNotificationSubTypeOtherPostIsNotApproved;
extern NSString *const UFPFNotificationSubTypeOtherReplyIsNotApproved;

// ?????????????????????/???????????????????????????????????????

// PFObject ????????????????????????????????????????????????????????????????????????????????????
extern NSString *const UFPFKeyObjectId; // objectId (String)
extern NSString *const UFPFKeyCreatedAt; // ???????????? (Date)
extern NSString *const UFPFKeyUpdatedAt; // ???????????? (Date)
extern NSString *const UFPFKeyACL; // ???????????? (ACL)

# pragma mark - Installtion ???

// ????????????_Installation???????????????????????????????????????????????? PFInstallationConstants????????????????????????
//
// NSString *const PFInstallationKeyParseVersion = @"parseVersion";
// NSString *const PFInstallationKeyDeviceType = @"deviceType";
// NSString *const PFInstallationKeyInstallationId = @"installationId";
// NSString *const PFInstallationKeyDeviceToken = @"deviceToken";
// NSString *const PFInstallationKeyAppName = @"appName";
// NSString *const PFInstallationKeyAppVersion = @"appVersion";
// NSString *const PFInstallationKeyAppIdentifier = @"appIdentifier";
// NSString *const PFInstallationKeyTimeZone = @"timeZone";
// NSString *const PFInstallationKeyLocaleIdentifier = @"localeIdentifier";
// NSString *const PFInstallationKeyBadge = @"badge";
// NSString *const PFInstallationKeyChannels = @"channels";

// ?????????????????????

// Class key
extern NSString *const PFInstalltionKeyClass;

// Field keys
extern NSString *const UFPFInstalltionKeyLinkedUser;

#pragma mark - User ???

// User ??? ??? ???????????????Parse Server????????????????????????????????????????????????????????????????????????

// Class key
extern NSString *const PFUserKeyClass;

// Field keys

// ?????????????????????
//extern NSString *const PFUserKeyEmailVerified;
//extern NSString *const PFUserKeyAuthData;
//extern NSString *const PFUserKeyUserName;
//extern NSString *const PFUserKeyPassword;
//extern NSString *const PFUserKeyEmail;

// ???????????????
extern NSString *const UFPFUserKeyIsLocked;
extern NSString *const UFPFUserKeyIsDeleted;
extern NSString *const UFPFUserKeyStatisticsInfo;
extern NSString *const UFPFUserKeyAvatar;
extern NSString *const UFPFUserKeyBackgroundImage;
extern NSString *const UFPFUserKeyBio;
extern NSString *const UFPFUserKeyBadgeCount;
extern NSString *const UFPFUserKeyPreferredLanguage;


# pragma mark - Topics ???

// Topics ??? ??? ??????

// Class key
extern NSString *const UFPFTopicKeyClass;

// Field keys

// ??????
extern NSString *const UFPFTopicKeyIsLocked;
extern NSString *const UFPFTopicKeyIsDeleted;
extern NSString *const UFPFTopicKeyIsPrivate;
extern NSString *const UFPFTopicKeyIsApproved;
extern NSString *const UFPFTopicKeyIsPopular;

// ???????????????
extern NSString *const UFPFTopicKeyTitle; // ?????? ???NSString???
extern NSString *const UFPFTopicKeyContent; // ?????????NSString???
extern NSString *const UFPFTopicKeyMediaFileObjects; // ?????????????????? (NSArray<PFFile *>)
extern NSString *const UFPFTopicKeyMediaFileType;
extern NSString *const UFPFTopicKeyFromUser; // ????????????PFUser???

// ???????????????
extern NSString *const UFPFTopicKeyPostCount; // ????????????NSNumber???
extern NSString *const UFPFTopicLikeKeyCount; // ????????????NSNumber???
extern NSString *const UFPFTopicKeyShareCount; // ????????????NSNumber???

// ??????/?????????
extern NSString *const UFPFTopicKeyCategory; // ?????? ???UFPFCategory???
extern NSString *const UFPFTopicKeyTags; // ?????? ???NSArray???



# pragma mark - Posts ???

// Posts ??? ??? ??????

// Class key
extern NSString *const UFPFPostKeyClass;

// Field keys

// ??????
extern NSString *const UFPFPostKeyIsLocked;
extern NSString *const UFPFPostKeyIsApproved;
extern NSString *const UFPFPostKeyIsDeleted;

// ????????????
extern NSString *const UFPFPostKeyContent;
extern NSString *const UFPFPostKeyMediaFileObjects;
extern NSString *const UFPFPostKeyMediaFileType;
extern NSString *const UFPFPostKeyReplies;

// ???????????????
extern NSString *const UFPFPostKeyReplyCount;
extern NSString *const UFPFPostLikeKeyCount;

// ??????
extern NSString *const UFPFPostKeyFromUser;
extern NSString *const UFPFPostKeyToTopic;

# pragma mark - Replies ???

// Replies ??? ??? ????????? ?????????????????????????????????????????????????????????

// Class key
extern NSString *const UFPFReplyKeyClass;

// Field keys

// ??????
extern NSString *const UFPFReplyKeyIsLocked;
extern NSString *const UFPFReplyKeyIsApproved;
extern NSString *const UFPFReplyKeyIsDeleted;

// ????????????
extern NSString *const UFPFReplyKeyContent;

// ???????????????
extern NSString *const UFPFReplyLikeKeyCount;

// ??????
extern NSString *const UFPFReplyKeyFromUser;
extern NSString *const UFPFReplyKeyToPost;
extern NSString *const UFPFReplyKeyToReply;

# pragma mark - Categories ???

// Categories ??? ??? ??????

// Class key
extern NSString *const UFPFCategoryKeyClass;

// Field keys
extern NSString *const UFPFCategoryKeyName;

# pragma mark - Tags ???

// Tags ??? ??? ??????

// Class key
extern NSString *const UFPFTagKeyClass;

// Field keys
extern NSString *const UFPFTagKeyName;

# pragma mark - TopicLikes ???

// TopicLikes ??? ???????????????

// Class key
extern NSString *const UFPFTopicLikeKeyClass;

// Field keys
extern NSString *const UFPFTopicLikeKeyFromUser;
extern NSString *const UFPFTopicLikeKeyToTopic;
extern NSString *const UFPFTopicLikeKeyIsDeleted;

# pragma mark - PostLikes ???

// PostLikes ??? ???????????????

// Class key
extern NSString *const UFPFPostLikeKeyClass;

// Field keys
extern NSString *const UFPFPostLikeKeyFromUser;
extern NSString *const UFPFPostLikeKeyToPost;
extern NSString *const UFPFPostLikeKeyIsDeleted;

# pragma mark - ReplyLikes ???

// ReplyLikes ??? ???????????????

// Class key
extern NSString *const UFPFReplyLikeKeyClass;

// Field keys
extern NSString *const UFPFReplyLikeKeyFromUser;
extern NSString *const UFPFReplyLikeKeyToReply;
extern NSString *const UFPFReplyLikeKeyIsDeleted;

# pragma mark - TopicReports ???

// TopicReports ??? ???????????????

// Class key
extern NSString *const UFPFTopicReportKeyClass;

// Field keys
extern NSString *const UFPFTopicReportKeyFromUser;
extern NSString *const UFPFTopicReportKeyToTopic;

# pragma mark - PostReports ???

// PostReports ??? ???????????????

// Class key
extern NSString *const UFPFPostReportKeyClass;

// Field keys
extern NSString *const UFPFPostReportKeyFromUser;
extern NSString *const UFPFPostReportKeyToPost;

# pragma mark - ReplyReports ???

// ReplyReports ??? ???????????????

// Class key
extern NSString *const UFPFReplyReportKeyClass;

// Field keys
extern NSString *const UFPFReplyReportKeyFromUser;
extern NSString *const UFPFReplyReportKeyToReply;


# pragma mark - Shares ???

// Shares ??? ???????????????Topic

// Class key
extern NSString *const UFPFShareKeyClass;

// Field keys
extern NSString *const UFPFShareKeyTopic; // ?????????Topic
extern NSString *const UFPFShareKeyFromUser; // ????????????
extern NSString *const UFPFShareKeyToPlatform; // ????????????????????????

# pragma mark - Follows ???

// Follows ?????? ????????????????????????

// Class key
extern NSString *const UFPFFollowKeyClass;

// Field keys
extern NSString *const UFPFFollowKeyFromUser; // ??????
extern NSString *const UFPFFollowKeyToUser; // ?????????
extern NSString *const UFPFFollowKeyIsDeleted;


# pragma mark - Blocks ???

// Blocks ?????? ????????????

// Class key
extern NSString *const UFPFBlockKeyClass;

// Field keys
extern NSString *const UFPFBlockKeyFromUser; // ?????????
extern NSString *const UFPFBlockKeyToUser; // ???????????????


# pragma mark - Notifications ???

// Notifications ??? ?????????????????????????????????????????????????????????????????????????????????

// Class key
extern NSString *const UFPFTimeLineKeyClass;

extern NSString *const UFPFTimeLineKeyFromUser; // ???????????????
extern NSString *const UFPFTimeLineKeyToUser; // ???????????????
extern NSString *const UFPFTimeLineKeyType;
extern NSString *const UFPFTimeLineKeyPost;
extern NSString *const UFPFTimeLineKeyReply;
extern NSString *const UFPFTimeLineKeyLikeTopic;
extern NSString *const UFPFTimeLineKeyLikePost;
extern NSString *const UFPFTimeLineKeyLikeReply;
extern NSString *const UFPFTimeLineKeyFollow;


# pragma mark - StatisticsInfos ???

// StatisticsInfos??? User?????????StatisticsInfo????????????????????????????????????????????????/??????/Topic???/????????????????????????????????????

// Class key
extern NSString *const UFPFStatisticsInfoKeyClass;

// Field keys
extern NSString *const UFPFStatisticsInfoKeyUser; // ??????
extern NSString *const UFPFStatisticsInfoKeyProfileviews; // ??????
extern NSString *const UFPFStatisticsInfoKeyReputation; // ??????
extern NSString *const UFPFStatisticsInfoKeyTopicCount; // ??????
extern NSString *const UFPFStatisticsInfoKeyPostCount; // ??????
extern NSString *const UFPFStatisticsInfoKeyFollowerCount; // ??????
extern NSString *const UFPFStatisticsInfoKeyFollowingCount; // ??????
extern NSString *const UFPFStatisticsInfoKeyLikedCount; // ?????????

# pragma mark - Notification ???

// Class key
extern NSString *const UFPFNotificationKeyClass;

// Field keys

extern NSString *const UFPFNotificationKeyFromUser;
extern NSString *const UFPFNotificationKeyToUser;
extern NSString *const UFPFNotificationKeyType;
extern NSString *const UFPFNotificationKeySubType;
extern NSString *const UFPFNotificationKeyTopic;
extern NSString *const UFPFNotificationKeyPost;
extern NSString *const UFPFNotificationKeyReply;
extern NSString *const UFPFNotificationKeyMessage;

# pragma mark - NotificationCount ???

// Class key
extern NSString *const UFPFNotificationCountKeyClass;

// Field keys

extern NSString *const UFPFNotificationCountKeyUser;
extern NSString *const UFPFNotificationCountKeyTotalCount;
extern NSString *const UFPFNotificationCountKeyCommentCount;
extern NSString *const UFPFNotificationCountKeyLikeCount;
extern NSString *const UFPFNotificationCountKeyFollowCount;
extern NSString *const UFPFNotificationCountKeyMessageCount;
extern NSString *const UFPFNotificationCountKeyOtherCount;

# pragma mark - Message ???

// Message??? ???????????????????????????

// Class key
extern NSString *const UFPFMessageKeyClass;

// Field keys
extern NSString *const UFPFMessageKeyFromUser;
extern NSString *const UFPFMessageKeyToUser;
extern NSString *const UFPFMessageKeyContent;


# pragma mark - MessageGroup ???

// Message??? ???????????????????????????

// Class key
extern NSString *const UFPFMessageGroupKeyClass;

// Field keys
extern NSString *const UFPFMessageGroupKeyFromUser;
extern NSString *const UFPFMessageGroupKeyToUser;
extern NSString *const UFPFMessageGroupKeyLastMessage;
extern NSString *const UFPFMessageGroupKeyUnreadMessageCount;


# pragma mark - BadgeCount ???

// Message??? ???????????????????????????

// Class key
extern NSString *const UFPFBadgeCountKeyClass;

// Field keys
extern NSString *const UFPFBadgeCountKeyUser;
extern NSString *const UFPFBadgeCountKeyTotalCount;
extern NSString *const UFPFBadgeCountKeyCommentCount;
extern NSString *const UFPFBadgeCountKeyLikeCount;
extern NSString *const UFPFBadgeCountKeyFollowCount;
extern NSString *const UFPFBadgeCountKeyMessageCount;
extern NSString *const UFPFBadgeCountKeyOtherCount;

# pragma mark - AppInfo ???

// AppInfo??? ???????????????????????????

// Class key
extern NSString *const UFPFAppInfoKeyClass;

// Field keys
extern NSString *const UFPFAppInfoKeyVersion;
