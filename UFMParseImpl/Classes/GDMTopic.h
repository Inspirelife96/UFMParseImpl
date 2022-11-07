//
//  GDMTopic.h
//  Bolts
//
//  Created by XueFeng Chen on 2022/10/22.
//

#import "GDMObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface GDMTopic : GDMObject

+ (GDMTopic *)topicWithMetaData:(id)metaData error:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
