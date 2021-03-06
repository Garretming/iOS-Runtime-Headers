/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTopStoriesFeedGroupCursor : FCFeedGroupEmittingCursor {
    NSArray * _articleIDs;
    bool  _collapsed;
    NSDate * _optionalStoriesLastRefreshDate;
    NSDate * _publishDate;
}

@property (nonatomic, copy) NSArray *articleIDs;
@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (nonatomic, copy) NSDate *optionalStoriesLastRefreshDate;
@property (nonatomic, copy) NSDate *publishDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)articleIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isCollapsed;
- (id)optionalStoriesLastRefreshDate;
- (id)publishDate;
- (void)setArticleIDs:(id)arg1;
- (void)setCollapsed:(bool)arg1;
- (void)setOptionalStoriesLastRefreshDate:(id)arg1;
- (void)setPublishDate:(id)arg1;

@end
